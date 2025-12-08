[![](https://img.shields.io/badge/View%20Project-Website-blue)](https://muntisa.github.io/c-grader-pro/)


# C-Grader Pro - AI-Powered C Programming Exam Evaluation for Professors

**C-Grader Pro** is a modern, single-page web application designed to automate the evaluation of C programming exams using the power of Google's **Gemini 2.0 Flash AI**. It provides a streamlined workflow for professors to grade multiple student submissions with consistent, high-quality feedback and detailed scoring.

<img src="logo_c-grader-pro_crop.png" alt="Application Logo" style="width:10%; height:auto;">

## 🚀 Key Features

*   **AI-Driven Evaluation**: Utilizes Google's cutting-edge **Gemini 2.0 Flash Exp** API for superior code understanding and reasoning.
*   **Three-Phase Workflow**:
    1.  **Rubric Generation**: Automatically generates a strict grading rubric based on your exercise context.
    2.  **Automated Grading**: Evaluates student code against the rubric, checking for correctness, style, and efficiency.
    3.  **Report Generation**: Produces downloadable detailed text reports and CSV summary files.
*   **Smart Rubric Editor**: Review and modify the AI-generated grading criteria before applied to students.
*   **Evaluation Viewer**: interactive side-by-side viewer to inspect the AI's annotated feedback vs. the student's original code.
*   **Deterministic Grading**: Configured with strict model parameters (Temperature 0.0) to ensure consistent, fair grading across attempts.
*   **Local & Secure**: Runs entirely in your browser. API keys are stored locally and files are processed on your machine.
*   **Resilient Architecture**: Built-in rate limiting and auto-retry logic to handle API quotas smoothly.

## 📋 Prerequisites

*   A modern web browser (Chrome, Edge, or Firefox).
*   A **Google Gemini API Key**. You can get one for free at [Google AI Studio](https://aistudio.google.com/).
*   Student submissions organized in a directory (one folder per student containing their `.c` file).

## 🛠️ How to Use

1.  **Launch the App**: Simply open `c-grader-pro.html` in your web browser.
2.  **Configuration**:
    *   **API Key** (Required)
        - Paste your Google Gemini API key
        - It's stored locally in your browser for convenience
        - Never transmitted anywhere except to Google's API
3.  **Load Files**:
    *   **Root Directory** (Optional for demo)
        - Enter the path to your submissions folder
        - OR click "Browse for Folder" to select it graphically
        - Expected structure:
          ```
          Submissions/
          ├── Student_Alice_Johnson_123456/
          │   └── main.c
          ├── Student_Bob_Smith_789012/
          │   └── solution.c
          └── ...
          ```
    *   **Exercise Context**: Paste or load the exam problem statement/requirements.
    *   **Professor's Solution**: Paste or load your reference solution code.
4.  **Start Evaluation**:
    *   The system will first generate a grading rubric.
    *   **Review Phase**: Edit the rubric if necessary and confirm.
    *   **Grading Phase**: The app will iterate through all students.
5.  **View Results**:
    *   Download the `_FINAL_EVALUATIONS.txt` (detailed logs) and `_OnlyGrades.csv` (gradebook).
    *   Use the **Evaluation Viewer** at the bottom to inspect specific student results.

## 📂 Output Files

*   **`[FolderName]_FINAL_EVALUATIONS.md`**: A comprehensive markdown report containing grades, deductions, and fully annotated code for every student.
*   **`[FolderName]_OnlyGrades.csv`**: A spreadsheet-friendly format listing Student Name, Final Grade, and Deduction Summaries.
*   **`[FolderName]_grading_criteria.md`**: The finalized rubric used for the session.

## 🏗️ Technical Details

*   **Stack**: Vanilla HTML5, CSS3, JSON, and JavaScript (ES6+).
*   **Styling**: Modern, responsive dark UI using CSS Variables and Flexbox/Grid.
*   **API**: Direct integration with Google Generative Language API (REST).

## 👥 Credits & Affiliations

*   **Research Groups**: RNASA, CITIC, UDC
*   **Author**: Created by Cristian R Munteanu

---
*Disclaimer: This tool is an assistant for grading. While strictly prompt-engineered for accuracy, final grades should always be reviewed by a human instructor.*
